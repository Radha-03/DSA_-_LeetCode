class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        // There are 101 years from 1950 to 2050 inclusive
        vector<int> population(101, 0);
        
        // Mark births and deaths
        for (auto& log : logs) {
            int birth = log[0], death = log[1];
            population[birth - 1950]++;      // +1 for birth
            population[death - 1950]--;      // -1 for death
        }
        
        // Prefix sum to calculate population year by year
        for (int i = 1; i < 101; ++i) {
            population[i] += population[i - 1];
        }

        // Find the year with the maximum population
        int maxPop = population[0];
        int year = 1950;
        for (int i = 1; i < 101; ++i) {
            if (population[i] > maxPop) {
                maxPop = population[i];
                year = 1950 + i;
            }
        }

        return year;
    }
};
