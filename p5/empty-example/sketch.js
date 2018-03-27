    // ileKw = int(input("Podaj ilosc losowanych pkt: "))
    // ileKo = 0
    // r = 1
    // for i in range(ileKw):
    //     x = random.random()
    //     y = random.random()
    //     if x**2 + y ** 2 <= r**2:
    //         ileKo += 1

    // pi = 4 * ileKo / ileKw
    // print("Przyblizona wartosc Pi:", pi)    ileKw = int(input("Podaj ilosc losowanych pkt: "))

ileKw = prompt("Podaj ilosc pkt: ", 100 );
ileKo = 0;
r = prompt("Podaj proemin:", 100);

function getRnd(min,max){
	return Math.random() * (max - min) + min;
}

for(i = 0; i < ileKw; i++){
	x = Math.floor(getRnd(-r, r));
	y = Math.floor(getRnd(-r, r));
	//console.log(x);
	if (x*x + y*y <= r*r){
		ileKo++;
	}
}

console.log("Liczba pi:" + (4 *_ileKw/ileKo))

function setup() {
  // put setup code here
}

function draw() {
  // put drawing code here
}