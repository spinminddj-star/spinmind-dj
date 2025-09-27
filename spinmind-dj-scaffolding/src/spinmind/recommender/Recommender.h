#pragma once
#include <string>
#include <vector>
struct TrackFeature{std::string id;int camelot;double bpm;int energy;}; struct Suggestion{std::string id;double score;}; class Recommender{ public: std::vector<Suggestion> suggest(const TrackFeature&,const std::vector<TrackFeature>&) const;};
