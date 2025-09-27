#include "Recommender.h"
#include <algorithm>
#include <cmath>
static double keyScore(int a,int b){int diff=abs(a-b); if(diff==0) return 1.0; if(diff==1||diff==11) return 0.8; return 0.3;} std::vector<Suggestion> Recommender::suggest(const TrackFeature& now,const std::vector<TrackFeature>& lib) const{ std::vector<Suggestion> out; for(auto&t:lib){ double ks=keyScore(now.camelot,t.camelot); double bpmDrift=fabs(now.bpm-t.bpm)/std::max(1.0,now.bpm); double bs=std::max(0.0,1.0-bpmDrift); double es=1.0-fabs(now.energy-t.energy)/10.0; double score=0.5*ks+0.3*bs+0.2*es; out.push_back({t.id,score}); } std::sort(out.begin(),out.end(),[](auto&a,auto&b){return a.score>b.score;}); if(out.size()>5) out.resize(5); return out;}
