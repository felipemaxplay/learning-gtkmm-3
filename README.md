# Learning Gtkmm 3.0
Repositório criado para guardar os códigos dos exemplos e testes que estou aprendendo com o gtkmm 3.0.

# Pré-requisito
para poder buildar e executar os códigos você precisara:
- Compilador de C/C++ (gcc, g++).
- [gtkmm 3.0](https://www.gtkmm.org/en/) - site oficial para baixar .

# Build
Para conseguir compilar você precisara entrar em uma das pastas na qual você deseja fazer a build, depois para conseguir fazer a compilação você precisará adicionar esses parâmetros:
```bash
`pkg-config gtkmm-3.0 --cflags --libs`
```

Exemplo de compilação feito com o g++:
```bash
g++ ./src/02-range-widgets/*.cpp -o ./src/02-range-widgets/main `pkg-config gtkmm-3.0 --cflags --libs`
```