# UOSVertex
Overview
UOSStudentGraph is a graph theory-based project designed to analyze and explore the intricate student network at the University of Sargodha (UOS). This project combines principles of discrete mathematics, modular programming, and data visualization to derive meaningful insights from student relationships. It is implemented in C++ with a focus on modularity, scalability, and user interactivity through a graphical user interface (GUI).

The primary objective is to identify patterns within the network, such as the most popular students, potential friendships, and broadcast points, using graph theory concepts like degree centrality, asymmetric relationships, and weighted graphs.

Features
The project provides the following key functionalities:

Popularity Analysis:
Identify the most popular students based on the number of connections (friends) in the network.

Asymmetric Friendships:
Detect unreciprocated friendships where a student considers someone a friend, but the reverse is not true.

Hop-Based Connectivity:
Find students who are 1-hop, 2-hop, or 3-hop away from a given student, enabling deeper analysis of connectivity levels.

Visualization:
Graphically represent the network, hop-based connections, and potential friendships using a GUI for enhanced clarity and understanding.

Multiplicity Graph:
Create a weighted graph where the edge weights represent the strength of connections (number of shared friends) between students.

Potential Friendships:
Suggest new connections by analyzing the multiplicity graph and identifying relationships that meet a minimum threshold of commonality.

Broadcast Points:
Identify strategic points in the network from which information can reach all or most students efficiently.

Technical Highlights
Modular Programming:
The project is structured into independent modules, each responsible for a specific task, ensuring clear parameterization, outcomes, and maintainability.

File Handling:
Data is read from files and organized into arrays for efficient processing and manipulation.

Graphical User Interface (GUI):
Uses a GUI library to visually represent key features like hop-based connectivity and potential friendships.

Weighted Graphs:
Incorporates weighted edges to represent the strength of relationships, enabling deeper network analysis.

Implementation Details
Programming Language: C++
Core Concepts: Graph Theory, File Handling, Modular Programming
Modules:
Module 1-4: Popularity analysis, asymmetric friendships, and hop-based connectivity (Deadline: 10th December 2024).
Module 5-6: Multiplicity graph creation and potential friendship detection (Deadline: 25th December 2024).
Module 7-8: Visualization of potential friendships and broadcast points (Deadline: 8th January 2025).
Dataset
The dataset represents the student network and includes friendship relationships. It is structured to enable graph-based analysis and will be loaded into arrays for processing.


Acknowledgments
This project is part of the Discrete Mathematics course at the University of Sargodha (Fall 2024). Special thanks to the instructor for their guidance and support.

Developed by: 
