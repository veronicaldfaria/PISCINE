# Escreva uma linha de comando que exiba uma linha de duas para o comando ls -l,
# começando pela primeira linha.
# --------------------------------------------------------------
# ------ comando para execucao ---------------------------------
# ------ não tem, é o próprio exercicio ------------------------
# EXPLICACAO:
# NR -> Número de linhas já processadas considerando todos os arquivos de entrada.
# aws -> para poder printar as saidas;
#!/bin/bash
ls -l | awk 'NR % 2==1'