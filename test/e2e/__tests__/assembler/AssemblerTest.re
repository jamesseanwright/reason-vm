open Jest;

let deformatBinaryString = (formattedBinary: string): string => (
    formattedBinary |> Js.String.replaceByRe(
        [%bs.re "/\\s/g"],
        ""
    )
);

describe("Assembler e2e tests", () => {
    open Expect;

    test("It should produce the correct binary for the given input Assembly file", () => {
        let expectedBinary = deformatBinaryString("
            00000000 00000001 00001111 00000000 00000000
            00000000 00000000 00000000 00000000 00000001
        ");

        let actualBinary = Assembler.assemble("../../../asm/simple-loop.asm");

        expect(actualBinary) |> toEqual(expectedBinary);
    });
});
