module Cpu: Interfaces.Cpu = {
    type registersGroup = {
        instruction: Register.register,
        arithmetic: Register.register,
        accumulator: Register.register,
        status: Register.register,
        programCounter: Register.register,
        stackPointer: Register.register,
        b: Register.register,
        c: Register.register,
        d: Register.register,
        e: Register.register,
        h: Register.register,
        l: Register.register,
    };

    let registers = {
        instruction: {
            name: "instruction",
            size: 255,
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
};
