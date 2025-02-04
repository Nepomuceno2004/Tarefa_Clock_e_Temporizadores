# Tarefa Clock e Temporizadores - 29/01/2025

# Atividade_1
Este projeto implementa um semáforo utilizando o microcontrolador Raspberry Pi Pico W e Temporizador periódico. O controle da temporização dos sinais é realizado com a função add_repeating_timer_ms() do Pico SDK, garantindo que cada LED (vermelho, amarelo e verde) permaneça aceso por 3 segundos antes da próxima transição.

### Funcionalidades
1. Simulação de um semáforo básico com LEDs.
2. Controle de temporização automático usando add_repeating_timer_ms().
3. Mensagens de status enviadas pela porta serial a cada segundo.

### Componentes Necessários
1. Microcontrolador Raspberry Pi Pico W.
2. 03 LEDs (vermelho, amarelo e verde).
3. 03 Resistores de 330 Ω.

### Como Usar
1. Instale o Raspberry Pi Pico SDK.
2. Conecte o Raspberry Pi Pico W ao computador.
3. Compile e carregue o código no microcontrolador.
4. Conecte os LEDs e os resistores ao Raspberry Pi Pico W.
5. Executar o Programa
6. Abra um terminal para visualizar as mensagens enviadas pela porta serial.
7. Observe a troca de estados dos LEDs a cada 3 segundos.

# Atividade_2
Este projeto implementa um sistema de temporização para acionamento de LEDs utilizando a função add_alarm_in_ms() do Pico SDK. O acionamento ocorre a partir do clique em um botão (pushbutton), e os LEDs seguem uma sequência de desligamento com intervalos definidos.

### Funcionalidades
1. Acionamento de LEDs com temporização controlada.
2. Uso de add_alarm_in_ms() para definir atrasos de 3 segundos entre os estados dos LEDs.
3. Bloqueio de novas interações enquanto o ciclo de temporização estiver em execução.
4. Implementação debounce por software.

### Componetes necessários
1. Microcontrolador Raspberry Pi Pico W.
2. 03 LEDs (azul, vermelho e verde).
3. 03 Resistores de 330 Ω.
4. 01 Botão (Pushbutton).

### Como Usar
1. Instale o Raspberry Pi Pico SDK.
2. Conecte o Raspberry Pi Pico W ao computador.
3. Compile e carregue o código no microcontrolador.
4. Conecte os LEDs, resistores e o pushbutton ao Raspberry Pi Pico W conforme o esquema da Figura 2 do projeto.
5. Pressione o botão para iniciar a sequência de iluminação dos LEDs.
6. Observe a transição dos LEDs seguindo o temporizador de 3 segundos.



## Desenvolvido por Matheus Nepomuceno Souza
