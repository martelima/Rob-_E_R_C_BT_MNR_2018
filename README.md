## Projeto Robô Explorador Remotamente Controlado

### Componentes Utilizados
  * 2X Arduinos Uno R3
  * 1X Módulo Bluetooth HC-05 ou HC-06
  * 1X Shield Ponte H L293D
  * 2X paineis LED
  * 4X Motores DC com caixa de Redução e Rodinhas
  * 1X Sensor LDR 
  * 1X Fonte ou Bateria entre 5V a 12V.
  * 1X caixa de central de alarme
  * 4X cantoneiras para fixação dos motores 
### Etapas:
  1. Disposição de componentes:
  
     Verificamos onde seriam os furos e onde fixariamos os componentes na caixa de central de alarme, porém caso seja utilizado um outro tipo de chassi recomenda-se que siga o mesmo procedimento, ou seja verifique o posicionamento dos componentes que utilizar pois isso influenciará no modo como os fios serão dispostos e as soldas que serão realizadas.
  
  2. Solda eletrônica e ligações de componentes:
  
     Listamos todas portas de entrada e saída de sinal ou energia, para ver os pontos em comum que podemos fazer e reduzir a quantidade de fios e jumpers, e pré estabelecemos as portas que serão utilizadas pelo controlador e anotamos o que cada porta deve fazer.Exemplo:
     
     A0->Sensor de Luz
     
     D3->Painel LED
     
     Assim facilitamos a organização previa da proxima etapa.
   
   3. Programação:
   
   Quando vamos progamar primeiramente definimos bem uma situação problema, dai elaboramos uma lógica, ou seja montamos um algorítimo que servirá de guia para sua progamação, e assim elaboramos a solução para aquele problema. Exemplo:
   
   Ambiente escuro->sensor-> informação para o controlador-> interpretação dos dados-> acionamento de painel LED-> ambiente iluminado
   
   4. Testes
   
   Após a programação realize testes, medições e analises do comportamento do circuito que programou para se adequar melhor a sua necessidade, e altere para que o seu projeto forneca respostas melhores.
   
     
