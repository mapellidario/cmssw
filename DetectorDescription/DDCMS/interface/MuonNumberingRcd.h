#ifndef GEOMETRY_RECORDS_MUON_NUMBERING_RCD_H
#define GEOMETRY_RECORDS_MUON_NUMBERING_RCD_H

#include "FWCore/Framework/interface/DependentRecordImplementation.h"
#include "DetectorDescription/DDCMS/interface/DetectorDescriptionRcd.h"
#include "DetectorDescription/DDCMS/interface/DDSpecParRegistryRcd.h"
#include "boost/mpl/vector.hpp"

class MuonNumberingRcd : public edm::eventsetup::DependentRecordImplementation<
MuonNumberingRcd, boost::mpl::vector<DDSpecParRegistryRcd, DetectorDescriptionRcd>> {};
#endif
