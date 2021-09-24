const int catano = 0;
//int valorComutacao = 0;
int myPins[] = {8, 9, 10};
int valorLido = 0;
String dadosRecebidos = "";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, INPUT_PULLUP);

  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH); 
  digitalWrite(10, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorLido = analogRead(A5);
  //valorComutacao = analogRead(A4)*10;
  valorLido = map(valorLido, 0, 1023, 1, 5);

    //if(valorLido < valorComutacao){
    //digitalWrite(8, HIGH);
    //delay(50);
    //digitalWrite(9, HIGH);
    //delay(100);
    //digitalWrite(10, HIGH);
    //delay(150);
    //} 
    if(valorLido == 1){
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    }
    else if(valorLido == 2){
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    }
    else if(valorLido == 3){
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    }
    if(Serial.available() > 0){
    dadosRecebidos = Serial.readStringUntil('\n');
    switch ('A')
    {
      case 'A':
    Serial.println("\n Olá."); 
    if (dadosRecebidos == "azul"){
    digitalWrite(8, HIGH);
    Serial.println("\n Dados foram inseridos com sucesso.");
    }
    if (dadosRecebidos == "vermelho"){
    digitalWrite(9, HIGH);
    Serial.println("\n Dados foram inseridos com sucesso.");
    }
    if (dadosRecebidos == "branco"){
    digitalWrite(10, HIGH);
    Serial.println("\n Dados foram inseridos com sucesso.");
    }
    if(dadosRecebidos == "catano"){
    Serial.println("\n Ai o catano!" + catano);
    delay(1000);
    }
  else{
  dadosRecebidos = Serial.readStringUntil('\n');
  Serial.println("\n Por favor digite azul, vermelho ou branco."); 
  delay(6000);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  }
    }
    }
  if(digitalRead(11)==LOW){
  Serial.println("\n Bom dia.");
  delay(1000);
  switch ('B')
  {
    case 'B':
    if(valorLido == 1){
    Serial.println("\n Esta é a cor azul."); 
    }
    if(valorLido == 2){
    Serial.println("\n Esta é a cor vermelha."); 
    }
    if(valorLido == 3){
    Serial.println("\n Esta é a cor branca."); 
    }
    if(valorLido == 4){
    Serial.println("\n Este é o jogo das cores."); 
    }
  }
  }
  if(digitalRead(11)==HIGH){
  Serial.println("\n Esta é a parte difícil.");
  delay(3000);
  switch ('C')
  {
    case 'C':
    Serial.println("\n Por favor digite azul, vermelho ou branco.");
    dadosRecebidos = Serial.readStringUntil('\n');
    delay(1000);
    if(valorLido == 1 && dadosRecebidos == "azul"){
    Serial.println("\n Sucesso."); 
    }
    Serial.println("\n Por favor digite azul, vermelho ou branco.");
    dadosRecebidos = Serial.readStringUntil('\n');
    delay(1000);
    if(valorLido == 2 && dadosRecebidos == "vermelho"){
    Serial.println("\n Sucesso."); 
    }
    Serial.println("\n Por favor digite azul, vermelho ou branco.");
    dadosRecebidos = Serial.readStringUntil('\n');
    delay(1000);
    if(valorLido == 3 && dadosRecebidos == "branco"){
    Serial.println("\n Sucesso."); 
    }
    if(valorLido == 4){
    Serial.println("\n Este é o jogo das cores."); 
    }
    else{
      Serial.println("\n Tentativas esgotadas."); 
      delay(3000);
    }
  }
  }
  delay(50);
}



