Loop:
    move.b #0xF, d0 ; Move 15 into register d0
    move.b d0, d1   ; Move contents of register d0 into d1
    jump Loop        ; Jump back up to 'Loop'
