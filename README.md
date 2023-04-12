# iot-microverdes

Repositório principal do projeto de microverdes da disciplina Projeto em Internet das Coisas (SEL0373).

## Lista de compras

- Sensor de temperatura ()

## Sugestão de divisão de atividades

- Firmware
- Hardware
- Estrutura
- Plataforma

## Operação do sistema

### Fluxo do processo

1. Usuário acessa a plataforma e seleciona, de uma lista pré-definida, a planta que deseja-se cultivar. A partir desta escolha, a plataforma informa o usuário sobre cuidados básicos com a planta.
2. Usuário planta as sementes, coloca bandeija sobre estas e informa a plataforma que o processo foi iniciado.
3. Plataforma envia ao ESP32 os dados sobre o cultivo da planta.
4. Quando o processo for finalizado, o ESP32 informa a platafora.
5. A plataforma informa o usuário de que o processo foi finalizado.
6. Usuário colhe a planta.

Caso seja identificado algum problema, o usuário é informado.

### Processos controlados pelo ESP32

- Temperatura (monitorar por sensor e controlar por ventilação)
- Umidade do solo (monitorar por sensor e controlar por irrigação)
- Altura da planta (monitoriar por sensor de ultrassom)
- Iluminação (monitoriar por sensor e controlar por LED)


## A fazer

### Geral

- [ ] Definir e registrar neste arquivo o funcionamento do sistema
- [ ] Criar lista de compras (max6675)
- [ ] Dividir atividades

### Firmware

### Hardware

|  **Sensor** |  **Modelo**  | **Preço médio** | **Link** |
|:-----------:|:------------:|:---------------:|:--------:|
| Temperatura |    Max6675   |     R$ 20,00    |          |
|  Humildade  |  Capacitivo  |                 |          |
|  Distância  | IR reflexivo |     R$ 10,00    |          |

|   **Sistema**   |          **Modelo**         | **Preço médio** |
|:-----------:|:-----------------------:|:-----------:|
|  Ventilação |          Cooler         |             |
|  Irrigação  |     Bomba de aquário    |             |
|  Irrigação  | Mangueira/Tubo plástico |             |
|  Irrigação  |    Bico pulverizador    |             |
|  Iluminação |   Fita LED ou lâmpada   |             |
| Alimentação |         Fonte 5V        |             |


### Estrutura

### Plataforma
