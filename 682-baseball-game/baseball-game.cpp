class Solution {
public:
    int calPoints(vector<string>& operations) {
       
        std::vector<int> scores;

        for (const std::string& op : operations) {
            if (op == "+") {
                // Record a new score that is the sum of the previous two scores
                scores.push_back(scores.back() + scores[scores.size() - 2]);
            } else if (op == "D") {
                // Record a new score that is double the previous score
                scores.push_back(scores.back() * 2);
            } else if (op == "C") {
                // Invalidate and remove the previous score
                scores.pop_back();
            } else {
                // It's an integer string, convert and record it
                scores.push_back(std::stoi(op));
            }
        }

        // Sum up all the valid scores in the record
        return std::accumulate(scores.begin(), scores.end(), 0);
    

    }
};