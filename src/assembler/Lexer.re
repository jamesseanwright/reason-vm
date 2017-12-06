type tokenType =
  | Instruction
  | Comma
  | DataRegister
  | ImmediateValue
  | Comment
  | Label;

type token = {
    .
    tokenType: tokenType
};

let lex = (asm: string) => {
    let lines = Array.to_list(asm |> Js.String.split("\n"));
    Js.log(lines);
};
