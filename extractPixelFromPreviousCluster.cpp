#include "header_files/declarations.h"

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