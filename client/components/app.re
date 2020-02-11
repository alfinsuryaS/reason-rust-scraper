open Utils;
open Routes;

let applyToHeadEl = document##createElement("style");
document##head##appendChild(applyToHeadEl);
applyToHeadEl##innerHTML #= AppStyles.globalStyles;

[@react.component]
let make = () => {
    let route = configRoutes();
    
    <Fragment>
        <Header/>
        ( switch (route) {
            | Details(id) => <Detail id/>
            | Data => <Data/>
            | Home => <Home/>
            | _ => <NotFound/>
        })
    </Fragment>
};