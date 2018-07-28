/* TODO: pattern matching for instructions? */

let instructions = [
    ("move", 0b00000000)
];

let isValid = (instruction: string) => {
    instructions |> List.exists(i => fst(i) === instruction);
};
