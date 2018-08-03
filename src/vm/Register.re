exception Overflow(string);

module MakeRegister = (Input: Interfaces.InputRegister) => {
    let value = 0;

    let getName = () => Input.name;
    let getValue = () => value;

    let setValue = (newValue: int) => {
        let value = switch (value > Input.size) {
        | true => raise(Overflow("Overflow for " ++ Input.name))
        | _ => newValue
        };
    }
};
