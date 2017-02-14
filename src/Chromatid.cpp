// [[Rcpp::plugins(cpp11)]]
#include <Rcpp.h>
#include <iostream>
#include <sstream> //for std::stringstream 
#include <string>  //for std::string

#include "Chromatid.hpp"

Chromatid::Chromatid(){} // default-constructor

Chromatid::Chromatid(int allele, double length): // founder-constructor
  alleles(t_alleles{allele}), locations(t_locations{length}),
  father_ptr(NULL), mother_ptr(NULL){}


Chromatid::Chromatid(t_alleles alleles, t_locations locations,
                     const Chromatid& father, const Chromatid& mother): // data-constructor
  alleles(alleles), locations(locations), father_ptr(&father),
  mother_ptr(&mother){}

bool Chromatid::operator==(const Chromatid& other) const {return this == &other;}
