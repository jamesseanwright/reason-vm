module type Cpu = {
    /* TODO: define */
};

module type InputRegister = {
    let name: string;
    let size: int;
};

module type Register = {
    let getName: unit => string;
    let getValue: unit => int;
    let setValue: int => unit;
};
