open Jest;

describe("the Instructions module", () => {
    open Expect;

    describe("isValid()", () => {
        test("it should return true when it receives a recognised instruction name", () => {
            expect(Instructions.isValid("move")) |> toBe(true);
        });

        test("it should return false when it receives an unrecognised instruction name", () => {
            expect(Instructions.isValid("rofl")) |> toBe(false);
        });
    });
});
