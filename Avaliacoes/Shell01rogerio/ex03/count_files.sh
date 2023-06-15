# Escreva uma linha de comando que conte e exiba o número de arquivos regulares e
# diretórios no diretório atual e todos os seus subdiretórios. Deve incluir ".",
# o diretório inicial.
# --------------------------------------------------------------
# ------ comando para execucao ---------------------------------
# ------ ./count_files.sh | cat -e -----------------------------
# EXPLICACAO: 
# wc -> Ele imprimi contagens de nova linha, palavra e byte para cada arquivo.
# -l -> Imprime a contagem de novas linhas.
#!/bin/bash
find . | wc -l