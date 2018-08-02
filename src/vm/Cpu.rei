module type Cpu = {
    let setRegister: (Register.register, int) => unit;
};
