-- Define o projeto
target("vixen")

-- Define o tipo de saída como um executável
set_kind("binary")

-- Adiciona os arquivos de origem
add_files("vixen.c")

-- Define as flags de compilação
add_cflags("-std=c17", "-Wextra", "-pedantic", "-Wall")
