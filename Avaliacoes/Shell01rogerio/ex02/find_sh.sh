# Escreva uma linha de comando que procure todos os nomes de arquivo que terminem com ".sh" (sem
# aspas) no diretório atual e em todos os seus subdiretórios. Deveria
# exibe apenas os nomes dos arquivos sem o .sh.
# --------------------------------------------------------------
# ------ comando para execucao ---------------------------------
# ------ ./find_sh.sh | cat -e ---------------------------------
# EXPLICACAO: 
# rev -> reverte o nome dos arquivos encontrado com pelo find.
# cut -> remover seções de cada linha de arquivos.
# -d -> delimitador para especificar o que vai buscar.
# -f1 -> seleciona apenas o campos; também imprime qualquer linha que não contenha nenhum caractere delimitador.
# find . -type f -name "*.sh"
#!/bin/bash/
find . -type f -name "*.sh" | rev | cut -d "/" -f1 | rev | cut -d "." -f1