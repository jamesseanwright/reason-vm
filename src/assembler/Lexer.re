type tokenType =
  | Instruction
  | OperandLength
  | Comma
  | DataRegister
  | ImmediateValue
  | Comment
  | Label;

type token = {
    .
    tokenType: tokenType
};

let lex = (asm: string): list(token) => [
    { tokenType: Label }
];
