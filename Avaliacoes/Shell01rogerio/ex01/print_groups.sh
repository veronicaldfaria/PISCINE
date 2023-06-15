# Escreva uma linha de comando que exiba a lista de grupos para os quais o login,
# contido na variável de ambiente FT_USER , é um membro. Separado por
# vírgulas sem espaços.
# --------------------------------------------------------------
# ------ comando para execucao ---------------------------------
# ------ não tem, é o próprio exercicio ------------------------
# EXPLICACAO:
# FT_USER -> variável de ambiente.
# id -> retorna o numero da variavel de ambiente.
# -G -> retorna todos os grupos da variavel de ambiente.
# -n -> retorna o nome de grupo dentro da variavel de. 
# tr -> formata a saida substituindo o espaço por ,
# -d "\n" -> deleta a nova linha.
#!/bin/bash
id -Gn $FT_USER | tr ' ' ',' | tr -d "\n"