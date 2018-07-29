open Register;

type registersGroup = {
    instruction: register,
    arithmetic: register,
    accumulator: register,
    status: register,
    b: register,
    c: register,
    d: register,
    e: register,
    h: register,
    l: register,
};

let registers = {
    instruction: {
        maxSize: 255,
        value: 0,
    },

    arithmetic: {
        maxSize: 255,
        value: 0,
    },

    accumulator: {
        maxSize: 255,
        value: 0,
    },

    status: {
        maxSize: 31,
        value: 0,
    },

    b: {
        maxSize: 255,
        value: 0,
    },

    c: {
        maxSize: 255,
        value: 0,
    },

    d: {
        maxSize: 255,
        value: 0,
    },

    e: {
        maxSize: 255,
        value: 0,
    },

    h: {
        maxSize: 255,
        value: 0,
    },

    l: {
        maxSize: 255,
        value: 0,
    },
};
