# Controle Remoto de Iluminação Inteligente com ESP32

## Projeto Integrador IoT - Projeto de Controle de Iluminação

Este projeto foi desenvolvido como parte do curso de Projeto Integrador IoT. Ele oferece um sistema de controle remoto para ligar e desligar luzes à distância, proporcionando uma solução conveniente e esteticamente agradável para o gerenciamento de iluminação residencial.

## Demonstração

O projeto pode ser visualizado e executado em tempo real no ambiente de simulação Wokwi. [Clique aqui para acessar a simulação](https://wokwi.com/projects/381928594508863489).

## Instruções de Uso

Ao iniciar o projeto, o console fornecerá instruções para o usuário. Utilizando números, o usuário pode navegar pelo console para escolher qual LED controlar e qual função ativar no LED selecionado.

### Simulação no Wokwi

1. [Acesse a simulação no Wokwi](https://wokwi.com/projects/381928594508863489).
2. Inicie a simulação.
3. Utilize o console do Wokwi para interagir com o projeto de forma intuitiva e explicativa.

## Explicação do Código

O código consiste em um conjunto de funções que permitem o controle remoto de LEDs RGB em diferentes cômodos. Aqui está uma breve explicação das principais partes:

- **Configuração de Pinos:** Os pinos para cada LED RGB em diferentes cômodos são definidos no início do código.

- **Loop Principal (`loop()`):** O programa inicia solicitando ao usuário que escolha um cômodo. Após a escolha, ele entra em um loop que permite a seleção de várias ações, como ligar, desligar, escolher cores, etc.

- **Funções de Controle de Cores:** Existem funções para ligar, desligar e escolher cores específicas (vermelho, verde, azul, roxo).

- **Função `defineCor`:** Esta função mapeia a escolha do usuário para os pinos correspondentes do LED RGB e define a cor conforme a escolha.

## Personalização

O código é facilmente personalizável. Os LEDs e pinos estão definidos no início do código, permitindo que o usuário ajuste a configuração conforme necessário. Além disso, a função de controle de cores é flexível para permitir a criação de novas cores.

## Limitações

O controle remoto é feito exclusivamente por meio do console, sendo a implementação futura prevista para um aplicativo Android, proporcionando uma experiência mais prática.

---

**Nota:** Para uma visualização e execução ideais, é recomendável utilizar a simulação no ambiente Wokwi.

