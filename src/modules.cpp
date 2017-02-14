// [[Rcpp::plugins(cpp11)]]
#include <Rcpp.h>
#include "Chromatid.hpp"
#include "Gamete.hpp"
#include "Individual.hpp"

RCPP_EXPOSED_CLASS(Chromatid)
RCPP_EXPOSED_CLASS(Gamete)
RCPP_EXPOSED_CLASS(Individual)

RCPP_MODULE(mod){

  using namespace Rcpp;

  class_<Chromatid>("Chromatid")
    .constructor<int, double>() // founder-constructor
    .field_readonly("alleles", &Chromatid::alleles, "alleles")
    .field_readonly("locations", &Chromatid::locations, "locations")
    ;

  class_<Gamete>("Gamete")
    .default_constructor()
    .constructor<std::size_t, std::vector<double>>()
    .method("length", &Gamete::length)
    .method("append", &Gamete::append)
    ;


  class_<Individual>("Individual")
    // .default_constructor()
    .constructor<const Gamete&, const Gamete&>()
    .constructor<int, int, std::vector<double>>()
    ;
}
