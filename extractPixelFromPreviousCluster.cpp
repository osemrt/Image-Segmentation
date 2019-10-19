#include "header_files/declarations.h"

void extractPixelFromPreviousCluster(vector<vector<pxLocation*>>* v, pxLocation* ploc) {
	v->at(ploc->currentClusterId)
		.erase(
			remove(v->at(ploc->currentClusterId).begin(), 
				   v->at(ploc->currentClusterId).end(), ploc), 
			       v->at(ploc->currentClusterId).end()
		);
}