# Escreva uma linha de comando que exiba os endereços MAC da sua máquina. 
# Cada endereço deve ser seguido por uma quebra de linha.
# --------------------------------------------------------------
# ------ comando para execucao ---------------------------------
# ------ não tem, é o próprio exercicio-------------------------
# EXPLICACAO:
# ifconfig -> configuração da interface da rede;
# ether -> endereço mac;
# awk -> para poder printar as saidas;
#!/bin/bash
ifconfig | awk '/ether/{print $2}'