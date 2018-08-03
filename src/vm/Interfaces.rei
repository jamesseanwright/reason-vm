module type Cpu = {
    /* TODO: define */
};

module type RegisterSpecification = {
    let name: string;
    let size: int;
};

module type Register = {
    let getName: unit => string;
    let getValue: unit => int;
    let setValue: int => unit;
};
