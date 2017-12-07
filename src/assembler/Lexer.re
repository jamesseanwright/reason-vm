type tokenType =
  | Instruction
  | Comma
  | DataRegister
  | ImmediateValue
  | Comment
  | Label;

type token = {
    .
    tokenType: tokenType,
    value: string
};

let toTokens = (line: string) => {
    let rawTokens = line
        |> Js.String.replaceByRe([%bs.re "/\\;.*$/g"], "") /* removes comments */
        |> Js.String.splitByRe([%bs.re "/[\\s,]/g"]) /* TODO: move to delimiters const? */
        |> Array.to_list
        |> List.filter(r => String.length(r) > 0); /* TODO: extract into wider-capturing isEmpty util */
};

let lex = (asm: string) => { /* TODO - return type */
    let lines = Array.to_list(asm |> Js.String.split("\n"));
    List.map(toTokens, lines);
};
