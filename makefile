main:    main.cpp Dinosaurios.o Herbivoros.o Triceraptor.o carnivoros.o Spinosaurus.o Tyrannosaurus.o Aereos.o Marinos.o Omnivoros.o Oviraptor.o Cuidadores.o 
	g++ main.cpp Dinosaurios.o Herbivoros.o Triceraptor.o carnivoros.o Spinosaurus.o Tyrannosaurus.o Aereos.o Marinos.o Omnivoros.o Oviraptor.o Cuidadores.o -o main
main.o:	main.cpp Dinosaurios.h Herbivoros.h Triceraptor.h carnivoros.h Spinosaurus.h Tyrannosaurus.h Aereos.h Marinos.h Omnivoros.h Oviraptor.h Cuidadores.h 
	g++ -c main.cpp
Dinosaurios:	Dinosaurios.cpp Dinosaurios.h
	g++ -c Dinosaurios.cppHerbivoros:	Herbivoros.cpp Herbivoros.h
	g++ -c Herbivoros.cppTriceraptor:	Triceraptor.cpp Triceraptor.h
	g++ -c Triceraptor.cppcarnivoros:	carnivoros.cpp carnivoros.h
	g++ -c carnivoros.cppSpinosaurus:	Spinosaurus.cpp Spinosaurus.h
	g++ -c Spinosaurus.cppTyrannosaurus:	Tyrannosaurus.cpp Tyrannosaurus.h
	g++ -c Tyrannosaurus.cppAereos:	Aereos.cpp Aereos.h
	g++ -c Aereos.cppMarinos:	Marinos.cpp Marinos.h
	g++ -c Marinos.cppOmnivoros:	Omnivoros.cpp Omnivoros.h
	g++ -c Omnivoros.cppOviraptor:	Oviraptor.cpp Oviraptor.h
	g++ -c Oviraptor.cppCuidadores:	Cuidadores.cpp Cuidadores.h
	g++ -c Cuidadores.cpp
clean:
	rm  *.o main 