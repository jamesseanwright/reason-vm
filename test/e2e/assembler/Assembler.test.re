open Jest;

describe("Assembler e2e tests", () => {
    open Expect;

    test("It should produce the correct binary for the given input Assembly file", () => {
        let expectedBinary = "
            00000000 00000001 00001111 00000000 00000000
            00000000 00000000 00000000 00000000 00000001
            00000001 00000000
        ";

        let actualBinary = Assembler.(
            assemble("../../../asm/simple-loop.asm")
        );

        expect actualBinary |> toEqual expectedBinary;
    });
});
