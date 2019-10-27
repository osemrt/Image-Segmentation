#include "header_files/declarations.h"

//A function to extract a pixel from its current cluster
void extractPixelFromPreviousCluster(vector<vector<pxLocation*>>* v, pxLocation* ploc) {
	if (ploc->currentClusterId != INT_MIN) {

		v->at(ploc->currentClusterId)
			.erase(
				remove(v->at(ploc->currentClusterId).begin(),
					v->at(ploc->currentClusterId).end(), ploc),
				v->at(ploc->currentClusterId).end()
			);
	}	
}