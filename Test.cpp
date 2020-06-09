#include "Route.h"
#include <iostream>
int main()
{
    Route* flightRoutes = new Route(10);

    Airport* airports[10];
    airports[0] = new Airport(0, "MCO");
    airports[1] = new Airport(1, "ATL");
    airports[2] = new Airport(2, "LAX");
    airports[3] = new Airport(3, "ORD");
    airports[4] = new Airport(4, "DFW");
    airports[5] = new Airport(5, "DEN");
    airports[6] = new Airport(6, "JFK");
    airports[7] = new Airport(7, "SEA");
    airports[8] = new Airport(8, "LAS");
    airports[9] = new Airport(9, "EWR");
    
    flightRoutes->addFlight(new Flight(airports[0], airports[1], 100, 170, 441));
    flightRoutes->addFlight(new Flight(airports[0], airports[2], 330, 227, 2218));
    flightRoutes->addFlight(new Flight(airports[2], airports[3], 242, 113, 1742));
    flightRoutes->addFlight(new Flight(airports[1], airports[4], 147, 149, 731));
    flightRoutes->addFlight(new Flight(airports[4], airports[5], 126, 65, 641));
    flightRoutes->addFlight(new Flight(airports[5], airports[8], 116, 120, 628));
    flightRoutes->addFlight(new Flight(airports[8], airports[9], 297, 125, 2227));
    flightRoutes->addFlight(new Flight(airports[7], airports[9], 311, 269, 2396));
    flightRoutes->addFlight(new Flight(airports[0], airports[7], 347, 362, 3075));
    flightRoutes->addFlight(new Flight(airports[0], airports[5], 260, 157, 1546));
    flightRoutes->addFlight(new Flight(airports[6], airports[7], 327, 237, 2415));
    flightRoutes->addFlight(new Flight(airports[3], airports[7], 278, 173, 1716));
    
    
   // flightRoutes->DFS(airports[0]);
    
    cout << "Shortest path from " << airports[0]->airportName << " to " << airports[9]->airportName << endl;
    flightRoutes->determineShortestPath(airports[0], airports[9]);
    
    cout << "Fastest path from " << airports[0]->airportName << " to " << airports[9]->airportName << endl;
    flightRoutes->determineFastestFlight(airports[0], airports[9]);

    cout << "Lowest cost from " << airports[0]->airportName << " to " << airports[9]->airportName << endl;
    flightRoutes->determineLowestCostFlight(airports[0], airports[9]);
        
    cout << "Shortest distance from " << airports[0]->airportName << " to " << airports[9]->airportName << endl;
    flightRoutes->determineShortestDistanceFlight(airports[0], airports[9]);

    return 0;
}