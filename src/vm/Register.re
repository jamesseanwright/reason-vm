/* TODO: confirm this is idiomatic approach */

exception Overflow(string);

type registerState = {
    mutable value: int /* TODO: better means of handling side-effects */
};

module MakeRegister = (Input: Interfaces.RegisterSpecification) => {
    let state = {
        value: 0
    };

    let getName = () => Input.name;
    let getValue = () => state.value;

    let setValue = (newValue: int, isSigned: bool) => {
        state.value = switch (state.value > Input.size) {
        | true => raise(Overflow("Overflow for " ++ Input.name))
        | _ => newValue
        };
    }
};
