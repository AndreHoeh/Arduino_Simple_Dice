# Projektbeschreibung

In diesem Projekt soll ein Digitaler Würfel gebaut werden.
Hierzu entsteht eine Arduino Bibliothek, mit der ein Würfelobjekt erstellt werden kann.
Mit 7 LEDs und Widerständen kann dann, mit einem Arduino, ein Würfel simuliert werden.

## Zufall

Um eine zufällige Zahl zu erzeugen, verwendet der Arduino die standard Funktion random().
Bei jedem Programmstart wird der Randomseed neu generiert. 

## Taster entprellen

Der Taster muss nicht entprellt werden, da es für den Programmablauf irrelevant ist,
ob der Taster mehrfach hintereinander gedrückt wird.

## Programmablauf

Sobald der Arduino mit Strom versorgt wird, startet das Programm. 
Hierbei wird zuerst eine Animation angezeigt.
Danach wartet das Programm auf einen Tastendruck.
Wird die Taste gedrückt, erscheint eine kurze Animation und darauf eine zuällige Zahl von 1 bis 6.
Die Zahl wird für eine bestimmte zeit angezeigt. 
Wenn die Zahl verschwunden ist, kann durch drücken des Tasters eine neue zufällige zahl erzeugt werden.