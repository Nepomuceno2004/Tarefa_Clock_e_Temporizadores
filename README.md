# Tarefa Clock e Temporizadores - 29/01/2025

## Atividade_1
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

## Autor
### Matheus Nepomuceno Souza
