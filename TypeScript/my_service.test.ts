
import {MyService, Request, Response} from './my_service'
import {SingleSignOnRegistry} from "./single_sign_on";

describe('MyService', ()=>{

    it('rejects invalid SSOToken',() => {
        const service = new MyService(new SingleSignOnRegistry())
        const response = service.handle_request(new Request("Foo", null))
        expect(response.text).not.toEqual("Hello Foo!")
    })
})
