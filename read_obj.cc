void read_obj()
{

  TString roostr = "";

  multimap<TString, double>map_reco_xtrue;
  multimap<TString, double>map_reco_ytrue;

  multimap<TString, double>::iterator iterator_map;
  
  map_reco_xtrue.insert( pair<TString, double>("aa", 1) );
  map_reco_xtrue.insert( pair<TString, double>("aa", 2) );
  map_reco_xtrue.insert( pair<TString, double>("aa", 1) );
  map_reco_xtrue.insert( pair<TString, double>("ab", 10) );
  map_reco_xtrue.insert( pair<TString, double>("ac", 20) );
  map_reco_xtrue.insert( pair<TString, double>("ab", 30) );
  map_reco_xtrue.insert( pair<TString, double>("ab", 5) );

  map_reco_ytrue.insert( pair<TString, double>("ba", 1) );
  map_reco_ytrue.insert( pair<TString, double>("ba", 2) );
  map_reco_ytrue.insert( pair<TString, double>("ba", 1) );

  cout<<endl;
  for( iterator_map=map_reco_xtrue.begin(); iterator_map!=map_reco_xtrue.end(); iterator_map++ ) {
    cout<<" ---> "<< (*iterator_map).first <<"\t"<< (*iterator_map).second<<endl;
  }
  cout<<endl;

  iterator_map = map_reco_xtrue.find("ab");
  cout<<" --> 1, "<<(*iterator_map).first <<"\t"<< (*iterator_map).second<<endl;
  iterator_map++;
  cout<<" --> 2, "<<(*iterator_map).first <<"\t"<< (*iterator_map).second<<endl;
  iterator_map++;
  cout<<" --> 3, "<<(*iterator_map).first <<"\t"<< (*iterator_map).second<<endl;
  
}
