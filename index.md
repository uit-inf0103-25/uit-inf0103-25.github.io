# INF-0103 Datamaskiners virkemåte og programmering, høst 2025.

## Innhold {#innhold}
Her er nyttige lenker for å hoppe rett til en av overskriftene nedenfor

* [Pensumlitteratur](#pensum)
* [Kursets stab](#stab)
* [Forelesningsplan](#plan)
* [Hvor finner man oppgaver?](#oppgaver)
* [Forelesningsnotater](#forelesningsnotater)
* [Temaoversikt](#temaoversikt)


## Pensumlitteratur  {#pensum}

### Pensum
* Patt & Patel -- Introduction to Computing Systems (kalles P&P i
  temaoversikt). Fås i universitetsbokhandelen. Det finner løsningsforslag til
  utvalgte oppgaver 
  [på denne siden](https://highered.mheducation.com/sites/1260150534/student_view0/student_solutions_manual.html).

### Støttelitteratur
* Kernighan & Ritchie -- The C Programming language (K&R i temaoversikt).
  [Finnes tilgjengelig online her](https://archive.org/details/c-programming-language-2nd-edition/mode/2up).
* [c-faq](https://c-faq.com/): ofte-stilte spørsmål om C

[Tilbake til innhold](#innhold)

## Kursets stab {#stab}
### Forelesere
* AB: Anne Bosch (foreleser)
* RB: Rune Bostad (ansvarilg på Mo)
* EH: Einar Holsbø (kursansvarlig)
* EP: Edvard Pederseon (foreleser)
* JP: Jakob Pettersen (foreleser)

### Hjelpelærere
* Thomas L. Nygård (Mo)
* Thomas Tekie
* Simon Gilbu
* Håkon Johansen
* Ghafoor Ahsan
* Christoffer V. Larsen
* Tommy Nguyen

[Tilbake til innhold](#innhold)

## Forelesningsplan {#plan} 
Merk: på de dager hvor det ikke står noe er det ikke forelesning. Dette er
uansett om du har noe i timeplanen din som sier at det skal være forelesning.

Enkelte dager har vi forelesning + BBI-foredrag eller bare BBI-foredrag.
Oversikt over BBI tema finner du [her](https://uit.no/project/bbi2/cultural).

| Dato            | Tema                                                 | Notater                           | Foreleser |
|-----------------|------------------------------------------------------|-----------------------------------|-----------|
|**Tirsdag 23/09**|   Kompilering og headers                             |                                   |   JP+EH   |
| Fredag 26/09    |   BBI-foredrag                                       |                                   |   BBI     |
|**Tirsdag 30/09**|   Minne I: Minne, pekere, generell oversikt          |                                   |   JP      |
| Fredag 03/10    |   2's complement og flyttallsrepresentasjoner        |                                   |   AB      |
|**Tirsdag 07/10**|   Sammensatte datatyper (structs) + BBI foredrag     |                                   |  BBI+EP   |
| Fredag 10/10    |   Minne II: Dynamisk minnehåndtering                 | obligatorisk oppgave deles ut     |   EP      |
|**Tirsdag 14/10**|   Minne III: Stack, call stack, heap                 |                                   |   EH      |
| Fredag 17/10    |   Minne: Pekere (repetisjon)                         |                                   |   SG      |
|**Tirsdag 21/10**|   Lenket liste + BBI-foredrag                        |                                   | BBI + EH  | 
| Fredag 24/10    |   SDL/Event loop                                     |                                   |   EP      |
|**Tirsdag 28/10**|   Rekursjon + BBI-foredrag                           |                                   | BBI + EH  |
| Fredag 31/10    |                                                      |                                   |           |
|**Tirsdag 04/11**|   Input/Output med filer                             |                                   |   EP      |
| Fredag 07/11    |   Von Neumann-modellen                               | obligatorisk oppgave skal leveres |   AB      |
|**Tirsdag 11/11**|   BBI-foredrag                                       | starter 11:15, ikke 10:15         | BBI       |
| Fredag 14/11    |                                                      |                                   |           |
|**Tirsdag 18/11**|                                                      |                                   |           |
| Fredag 21/11    |                                                      |                                   |           |
|**Tirsdag 25/11**|   BBI-foredrag                                       | starter 11:15                     | BBI       |
| Fredag 28/11    |                                                      |                                   |           |
| <tag style="color: red;"> **Torsdag 11/12** </tag>   | <tag style="color: red;">  **EKSAMEN** </tag>                      |           |         |

[Tilbake til innhold](#innhold)

## Hvor finner man oppgaver? {#oppgaver}
Eller kanskje snarere: hvordan lærer man å programmere? Man lærer å programmere
ved å skrive programmer som løser forskjellige problemer. Læreboka P&P er en
kilde til oppgaver, i temaoversikt nedenfor lister vi noen oppgaver relevante
til hvert kapittel, men se gjerne på resten av dem også. Utover dette er det
mange gode resurser online. For eksempel:

* [Project Euler](https://projecteuler.net/) har matematiske småproblemer som
  skal løses gjennom programmering.
* [CryptoPals](https://cryptopals.com/) har oppgaver som dreier seg om å knekke
  kryptotekst.
* [Code golf stack exchange](https://codegolf.stackexchange.com/) har alle
  slags små oppgaver. Poenget for de som deltar aktivt er å skrive så korte
  programmer som mulig (derav "golf"); vi anbefaler å ignorere denne delen av
  code golfing da det ikke oppmuntrer til spesielt god/lesbar kode.

I tillegg finnes det mange alternativer på YouTube, som f.eks. fra
[freeCodeCamp](https://www.youtube.com/watch?v=KJgsSFOSQv0).

[Tilbake til innhold](#innhold)

## Temaoversikt {#forelesningsnotater}
Forelesningsnotater legges under `lectures/` i [dette github-repoet](https://github.com/uit-inf0103-25/uit-inf0103-25.github.io).

[Tilbake til innhold](#innhold)

## Temaoversikt {#temaoversikt}
Nedenfor er kurset i et nøtteskall med hint om relevant pensum og forslag til
oppgaver. For forelesningsnotater se
[forelesningsnotater](#forelesningsnotater) over.

###  Kompilering og headers                             
C kode oversettes til et kjørbart program via en prosess som kalles
kompilering; et C prosjekt organiseres typisk med headerfiler.

* Relevant pensum: TK
* Anbefalte oppgaver: TK

###  Minne I: Minne, pekere, generell oversikt          
Alle variabler ligger et sted i datamaskinens minne. En peker er en egen
datatype i C som peker (herav navnet) til en minneaddresse, altså en plass i
minnet.

* Relevant pensum: P&P kapittel 16, K&R kapittel 5.
* Anbefalte oppgaver: P&P 16.1-16.3, 16.9

###  2's complement og flyttallsrepresentasjoner        
Negative heltall representeres i *two's complement*, som er heltall modulo
$2^n$. Flyttall representeres som et fortegn (+/-), en signifikant/mantissa og
en eksponent, lignende med vitenskapelig notasjon.

* Relevant pensum: TK
* Anbefalte oppgaver: TK

###  Sammensatte datatyper (structs) 
En `struct` er en datatype i C som er satt sammen av flere datatyper; for
eksempel er `struct { int x; int y; }` satt sammen av to `int`.

* Relevant pensum: TK
* Anbefalte oppgaver: TK

###  Minne II: Dynamisk minnehåndtering                 
I mange tilfeller vet vi ikke hvor mye minne vi trenger mens vi skriver
programmet, f.eks. hvis dette avhenger av noe brukeren gjør. Vi kan dynamisk
allokere og deallokere minne ved bruk av en håndfull funksjoner, f.eks.
`malloc()` og `free()`.

* Relevant pensum: TK
* Anbefalte oppgaver: TK

###  Minne III: Stack, call stack, heap                 
Dynamisk allokert minne legges i en del av minnet som kalles **heap**. Alt
minne som hører til et funksjonskall havner i et område som kalles **stacken**
eller the call stack på engelsk. Denne fungerer som en stack datastruktur: det
fsiste som ble lagt inn er det første som fjernes.

* Relevant pensum: TK
* Anbefalte oppgaver: TK

###  Lenket liste 
En lenket liste er en dynamisk datastruktur som kan holde vilkårlig mange ting
i rekkefølge. Dette gjøres ved at det lagres noe data (det man vil ha i lista)
og en peker til neste "node" (data + peker) i listen.

* Relevant pensum: TK
* Anbefalte oppgaver: TK

###  SDL/Event loop                                     
I forbindelse med den obligatoriske oppgaven bruker vi et bibliotek som heter
SDL. Man bruker det bl.a. til å tegne på datamaskinens skjerm. En event loop er
en løkke som kjører igjen og igjen og oppdaterer skjerm og annen tilstand
forbundet med programmets kjøring.


###  Rekursjon 
Rekursjon er en programmeringsteknik hvor en funksjon kaller seg selv. Et
lekeeksempel er "n fakultet"-funksjonen vi kjenner fra matematikk som kan
defineres relativt til seg selv:

$$
n! = n\cdot (n-1)\cdot \ldots \cdot 2 \cdot 1 = n\cdot (n-1)!
$$

eller i C kode

```C
int factorial(int n) {
    if (n == 1) return 1;
    else return n*factorial(n-1);
}
```

* [Forelesningsnotater]()
* Relevant pensum: TK
* Anbefalte oppgaver: TK

###  Input/Output med filer                             
Et program er mest interessant når det tar inn data (input til programmet) og
gir ut data (output fra programmet). Filer er en veldig vanlig mate å gi
input/få output.

* Relevant pensum: TK
* Anbefalte oppgaver: TK

###  Von Neumann-modellen                               
På midten av 1900-tallet foreslo Von Neumann en model for hvordan komponentene
i en datamaskin kan organiseres og samhandle. Denne modellen er i stor grad
relevant også i dag.

* Relevant pensum: TK
* Anbefalte oppgaver: TK

[Tilbake til innhold](#innhold)
