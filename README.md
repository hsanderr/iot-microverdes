# iot-microverdes

Repositório principal do projeto de microverdes da disciplina Projeto em Internet das Coisas (SEL0373) da Universidade de São Paulo (USP).

Main repository for the microgreens project for the Internet of Things Project (SEL0373) course from University of São Paulo (USP).

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
