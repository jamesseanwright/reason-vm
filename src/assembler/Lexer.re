type tokenType =
  | Instruction(string)
  | DataRegister(string)
  | AddressRegister(string)
  | ImmediateValue(string)
  | Label(string)
  | Unrecognised;

let isImmediateValue = (rawToken: string) => String.get(rawToken, 0) === '#'; /* TODO: symbolic constants */

let getToken = (rawToken: string) => {
    if (Instructions.isValid(rawToken)) {
        Instruction(rawToken);
    } else if (Registers.isData(rawToken)) {
        DataRegister(rawToken);
    } else if (Registers.isAddress(rawToken)) {
        AddressRegister(rawToken);
    } else if (isImmediateValue(rawToken)) {
        ImmediateValue(rawToken);
    } else {
        Unrecognised;
    }
};

let toTokens = (line: string) => {
    line /* TODO: use OCaml backend for Regex? */
        |> Js.String.replaceByRe([%bs.re "/\\;.*$/g"], "") /* removes comments */
        |> Js.String.splitByRe([%bs.re "/[\\s,]/g"]) /* TODO: move to delimiters const? */
        |> Array.to_list
        |> List.filter(r => String.length(r) > 0) /* TODO: extract into wider-capturing isEmpty util */
        |> List.map(getToken);
};

let lex = (asm: string): list(tokenType) => {
    let lines = Array.to_list(asm |> Js.String.split("\n"));

    lines
        |> List.map(toTokens)
        |> List.flatten;
};
