# Benutzerdokumentation

Dieser Teil der Dokumentation richtet sich an User, die erst wenig Erfahrung mit Arduino-Programmierung oder Elektronik gemacht haben.
Wer dieses Projekt nachbauen will sollte erst sicherstellen, dass er die folgenden Materialien zu Verfügung hat.
- Arduino + USB Kabel
- Arduino [Software](https://www.arduino.cc/en/Main/Software)
- 7 LEDs + Vorwiderstände
- 1 Schalter oder Knopf
- Kabel und Steckbrett

## Der Aufbau

Ein Beispielaufbau ist [hier](Anschlussbeispiel.PNG) zu finden.
Es ist zu beachten, dass die in diesem Beispiel verwendeten Pins eventuell nicht die gleichen wie im Programmcode Beispiel sind.

## Bibliothek (Dice) installieren

Nachdem die Arduino Software ordnungsgemäß installiert wurde kann unter 
- Sketch->Bibiothek einbinden

ein gezipter Bibiotheksordner eingefügt werden. Es kann aber auch ein unkomprimierter Order direkt in den Library Ordner unter 
- C:\Users\username\Documents\Arduino\libraries

eingefügt werden.

## Beispiel Sketch

Wenn die Bibliothek ordnungsgemäß eingefügt wurde erscheint nun unter
- Datei->Beispiele->Dice->simpleDie

das Programmbeispiel und kann eingefügt werden.
Jetzt müssen nur noch die Pins auf die Pins mit den angeschlossenen LEDs geändert werden.
Im Kommentar der Programmcodes ist aufgezeigt, in welcher Reihenfolge die LEDs angeschlossen werden müssen. 

