## So_long

[so_longg.webm](https://github.com/user-attachments/assets/6238759d-f748-4026-a016-ef4d52b0d9fc)

## Sobre

O **so_long** é um projeto de jogo 2D desenvolvido como parte do common core da 42 com foco em conceitos básicos de desenvolvimento de jogos e programação gráfica. Este projeto serve como uma introdução ao desenvolvimento de jogos utilizando a biblioteca MiniLibX, uma ferramenta para criar interfaces gráficas simples em ambientes Unix-like.

### Objetivo do Jogo

O objetivo principal do **so_long** é guiar o jogador através de um labirinto, coletar todos os itens disponíveis e encontrar a saída. O jogo é projetado para ser simples, mas oferece uma boa prática em diversos aspectos do desenvolvimento de jogos:

- **Navegação em Labirintos**: O jogador deve explorar o labirinto, utilizando o teclado para mover-se e coletar os itens.
- **Coleta de Itens**: Itens estão espalhados pelo labirinto e devem ser coletados antes de encontrar a saída.
- **Condição de Vitória**: O nível é considerado completo quando todos os itens foram coletados e o jogador alcançou a saída.


### Abordagem de Desenvolvimento


O **so_long** foi desenvolvido utilizando a biblioteca MiniLibX, que fornece as funcionalidades básicas necessárias para criar uma interface gráfica e lidar com eventos do teclado. O projeto segue uma arquitetura modular, o que facilita a manutenção e a adição de novas funcionalidades. Os principais componentes do jogo incluem:

- **Módulo de Jogo**: Gerencia o loop principal do jogo, atualizações e renderização da tela.
- **Módulo de Mapa**: Carrega e interpreta o arquivo de mapa, que define a disposição do labirinto, itens e saída.
- **Módulo de Jogador**: Controla a movimentação do jogador e a interação com o ambiente do jogo.


### Tecnologias e Ferramentas


- **C Language**: A linguagem principal utilizada para o desenvolvimento do jogo.
- **MiniLibX**: Biblioteca gráfica que fornece funções para desenhar gráficos e gerenciar eventos em uma janela.
- **X11**: Sistema de janelas utilizado pela MiniLibX para criar e manipular janelas em sistemas Unix-like.



### Propósito Educacional


O **so_long** foi criado para fornecer uma compreensão prática dos conceitos básicos de desenvolvimento de jogos, incluindo:

- **Desenvolvimento Gráfico 2D**: Usando a MiniLibX para renderizar gráficos e lidar com a interface do usuário.
- **Lógica de Jogo**: Implementando regras e condições de vitória em um jogo simples.
- **Gerenciamento de Recursos**: Carregamento e interpretação de arquivos de mapa para definir o layout do jogo.

Este projeto é ideal para iniciantes que desejam aprender sobre programação de jogos e desenvolvimento gráfico em C, oferecendo uma base sólida sobre a qual é possível construir jogos mais complexos.


## Requisitos


Para compilar e executar o **so_long**, você precisará de:

- [MiniLibX](https://github.com/42Paris/minilibx-linux)
- [Compilador C](https://gcc.gnu.org/)
- [Make](https://www.gnu.org/software/make/)


## Instalação


1. Clone o repositório:

   ```
   git clone https://github.com/seu_usuario/so_long.git
   cd so_long
   ```

2. Instale a Minilibx

```
git clone https://github.com/42Paris/minilibx-linux
cd minilibx-linux
make
cd ..
```

3.Compile o projeto:

```
make
```

4. Execute o jogo:

```
./so_long map_file.ber
```

Substitua [map_file.ber] pelo caminho para o arquivo do mapa que você deseja jogar.

## Contribuição

Contribuições são bem-vindas! Se você deseja ajudar a melhorar o so_long, siga estas etapas:

Fork o repositório.
Crie uma branch para a sua feature (git checkout -b feature/MinhaFeature).
Faça suas alterações e commit (git commit -am 'Adiciona nova feature').
Push para a branch (git push origin feature/MinhaFeature).
Abra um Pull Request.

## Contato

Se você tiver dúvidas ou precisar de ajuda, sinta-se à vontade para abrir uma issue ou entrar em contato (:
   
