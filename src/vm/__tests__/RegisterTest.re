open Jest;

describe("the Register module", () => {
    open Expect;

    describe("setValue()", () => {
        test("it should update the register's value", () => {
            module MyRegister = Register.MakeRegister({
                let name = "MyRegister";
                let size = 255;
            });

            MyRegister.setValue(20, false);

            expect(MyRegister.getValue()) |> toEqual(20);
        });
    });
});
