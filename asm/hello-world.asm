START:
    LEA MESSAGE, A1
    MOVE.B  #14, D0
    TRAP    #15
    SIMHALT

MESSAGE DC.B    'HELLO WORLD',0

END START
