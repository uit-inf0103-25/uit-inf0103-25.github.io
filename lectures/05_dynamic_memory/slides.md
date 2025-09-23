---
title:
- "INF-0103 Minne II: Dynamisk minnehåndtering"
author:
- "Edvard Pedersen, UiT – Norges arktiske universitet"
theme:
- default
colortheme:
- seagull
aspectratio:
- 169
font:
- serif
fontsize:
- 14pt
date:
- "Høst 2025"
---

# Dagens tema

* Størrelse på variabler og verdier


# `sizeof`-operatoren

* Forteller hvor mange bytes en variabel eller en datatype tar opp i minnet

* Kan brukes direkte på datatypen `sizeof(int)` eller på en variabel `sizeof(x)`.

* Alle pekere tar like mye plass (de er alle minneaddresser)

* Relasjon til peker-aritimetikk: `p + n` gir en peker som er `n * sizeof(*p)` bytes lenger framme enn `p`

# Eksempel med `sizeof`-operatoren
