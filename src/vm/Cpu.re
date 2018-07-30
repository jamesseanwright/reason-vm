open Register;

exception Overflow(string);

type registersGroup = {
    instruction: register,
    arithmetic: register,
    accumulator: register,
    status: register,
    programCounter: register,
    stackPointer: register,
    b: register,
    c: register,
    d: register,
    e: register,
    h: register,
    l: register,
};

let registers = {
    instruction: {
        name: "instruction",
        size: 255, /* TODO: signing! */
        value: 0,
    },

    arithmetic: {
        name: "arithmetic",
        size: 255,
        value: 0,
    },

    accumulator: {
        name: "accumulator",
        size: 255,
        value: 0,
    },

    status: {
        name: "status",
        size: 31,
        value: 0,
    },

    b: {
        name: "b",
        size: 255,
        value: 0,
    },

    c: {
        name: "c",
        size: 255,
        value: 0,
    },

    d: {
        name: "d",
        size: 255,
        value: 0,
    },

    e: {
        name: "e",
        size: 255,
        value: 0,
    },

    h: {
        name: "h",
        size: 255,
        value: 0,
    },

    l: {
        name: "l",
        size: 255,
        value: 0,
    },

    programCounter: {
        name: "programCounter",
        size: 65535,
        value: 0,
    },

    stackPointer: {
        name: "stackPointer",
        size: 65535,
        value: 0,
    },
};

/* TODO: should register be an object
 * that encapsulates this behaviour? */
let setRegister = (register: register, value: int) => {
    switch (value > register.size) {
    | true => raise(Overflow("Overflow for register " ++ register.name))
    | _ => 0 /* TODO: update record */
    }
};
