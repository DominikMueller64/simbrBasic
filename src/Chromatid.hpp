// [[Rcpp::plugins(cpp11)]]
#include <Rcpp.h>
#include <vector>
#include <string>

#ifndef CHROMATID_H
#define CHROMATID_H

typedef std::vector<int> t_alleles;
typedef std::vector<double> t_locations;

class Chromatid
{
 public:
  Chromatid(); // default-constructor
  Chromatid(int allele, double length); // founder-constructor
  Chromatid(t_alleles alleles, t_locations locations,
            const Chromatid& father, const Chromatid& mother); // data-constructor

  bool operator==(const Chromatid& other) const;

  t_alleles alleles;
  t_locations locations;
  const Chromatid* father_ptr;
  const Chromatid* mother_ptr;
};

#endif
