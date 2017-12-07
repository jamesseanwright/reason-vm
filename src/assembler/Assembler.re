let assemble = (asmPath: string): string => {
    /* TODO: read from file */
    Lexer.lex(String.trim("
        move #0xF, d0 ; Move 15 into register d0
        move d0, d1   ; Move contents of register d0 into d1
    "));

    "foo";
};
